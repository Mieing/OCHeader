@class NSString, HTSLiveCommon;

@interface HTSLiveRoomAnswerQuestionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *bizData;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
