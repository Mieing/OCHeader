@class NSArray, AWECodeGenActionResponseModel;

@interface AWECodeGenV1NoticeActionDispatchResponse : AWEBaseResponseModel

@property (nonatomic) long long noticeId;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) AWECodeGenActionResponseModel *actionResponseModel;
@property (nonatomic) BOOL itemDisable;
@property (nonatomic) BOOL noticeDisable;
@property (copy, nonatomic) NSArray *failGroupsArray;
@property (copy, nonatomic) NSArray *disableKeysArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
