@class NSString, IESLiveCombineSubject;

@interface IESLiveAioLinkRegisterMessageRequest : IESLivePBBaseMessage

@property (weak, nonatomic) IESLiveCombineSubject *subject;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) BOOL wrds;
@property (copy, nonatomic) NSString *wrdsSubkey;

+ (id)descriptor;

@end
