@class NSString, NSData;

@interface IESLiveAioLinkError : GPBMessage

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *extra;
@property (copy, nonatomic) NSString *contentType;

+ (id)descriptor;

@end
