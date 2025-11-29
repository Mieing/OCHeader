@class NSString;

@interface WCOActivityMsgInfo : NSObject <PBCoding>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *startBtnTxt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_startBtnTxt;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
