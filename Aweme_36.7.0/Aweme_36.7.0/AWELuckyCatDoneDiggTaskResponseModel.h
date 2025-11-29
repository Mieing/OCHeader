@class AWELuckyCatDoneDiggTaskResponseToastModel;

@interface AWELuckyCatDoneDiggTaskResponseModel : AWELiteBaseApiModel

@property (nonatomic) long long taskID;
@property (retain, nonatomic) AWELuckyCatDoneDiggTaskResponseToastModel *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
