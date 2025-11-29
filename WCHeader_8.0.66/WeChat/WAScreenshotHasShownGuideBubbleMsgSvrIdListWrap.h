@class NSString, NSMutableArray;

@interface WAScreenshotHasShownGuideBubbleMsgSvrIdListWrap : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *msgSvrIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_msgSvrIdList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
