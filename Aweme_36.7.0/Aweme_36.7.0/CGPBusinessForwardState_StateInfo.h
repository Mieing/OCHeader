@class NSString;

@interface CGPBusinessForwardState_StateInfo : GPBMessage

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int state;
@property (nonatomic) int error;

+ (id)descriptor;

@end
