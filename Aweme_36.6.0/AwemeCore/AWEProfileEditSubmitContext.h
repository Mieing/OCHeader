@class NSDictionary;

@interface AWEProfileEditSubmitContext : NSObject

@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL ifChangeUniqueID;
@property (nonatomic) BOOL ifChangeImage;
@property (nonatomic) BOOL showsSuccessToast;
@property (nonatomic) BOOL allowUserInteractionWhenLoading;
@property (nonatomic) BOOL callCompletionGuarantee;

+ (id)contextWithBlock:(id /* block */)a0;

- (void).cxx_destruct;

@end
