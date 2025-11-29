@class NSString;

@interface MMLivePrecheckResultItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isFail;
@property (nonatomic) BOOL isRealname;
@property (nonatomic) BOOL cannotJumpVerify;

- (void).cxx_destruct;

@end
