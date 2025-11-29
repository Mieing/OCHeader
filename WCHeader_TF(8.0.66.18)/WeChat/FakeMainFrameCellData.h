@class NSString;

@interface FakeMainFrameCellData : NSObject <PBCoding>

@property (retain) NSString *userName;
@property (retain) NSString *textForNameLabel;
@property (retain) NSString *textForTimeLabel;
@property (retain) NSString *textForMessageLabel;
@property double widthForNameLabel;
@property BOOL bNormalCell;
@property BOOL bTopCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_textForNameLabel;
+ (void)PBArrayAdd_textForTimeLabel;
+ (void)PBArrayAdd_textForMessageLabel;
+ (void)PBArrayAdd_widthForNameLabel;
+ (void)PBArrayAdd_bNormalCell;
+ (void)PBArrayAdd_bTopCell;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
