@class NSString, NSArray, AWEIMMessageListContinuousFoldRule_MsgModel;

@interface AWEIMMessageListContinuousFoldRule : NSObject

@property (copy, nonatomic) NSString *foldID;
@property (retain, nonatomic) NSArray *matchConditions;
@property (copy, nonatomic) NSArray *chatType;
@property (copy, nonatomic) NSArray *groupCategory;
@property (nonatomic) BOOL defaultFoldValue;
@property (nonatomic) long long foldThreshold;
@property (retain, nonatomic) AWEIMMessageListContinuousFoldRule_MsgModel *msgModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
