@class NSString, NSArray;

@interface BDUGDeviceUnionConfig : NSObject

@property (copy, nonatomic) NSString *validKey;
@property (retain, nonatomic) NSArray *invalidKeys;
@property (retain, nonatomic) NSArray *activityIdList;
@property (nonatomic) BOOL enableApplyToken;
@property (nonatomic) BOOL enableRefreshActId;

- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
