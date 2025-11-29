@class NSString;

@interface IESECProductListRefreshMessage : GPBMessage

@property (nonatomic) long long updateTs;
@property (copy, nonatomic) NSString *updateToast;

+ (id)descriptor;

@end
