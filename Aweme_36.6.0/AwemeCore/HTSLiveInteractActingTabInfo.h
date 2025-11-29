@class NSString;

@interface HTSLiveInteractActingTabInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *description_p;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
