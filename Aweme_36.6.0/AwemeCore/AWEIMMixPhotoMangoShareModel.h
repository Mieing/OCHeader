@class NSString, AWEIMMixPhotoStartContext;

@interface AWEIMMixPhotoMangoShareModel : NSObject

@property (readonly, copy, nonatomic) NSString *idempotentId;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, nonatomic) AWEIMMixPhotoStartContext *context;
@property (readonly, copy, nonatomic) id /* block */ selectAction;
@property (copy, nonatomic) id /* block */ dynamicActivityInfoAction;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *createButtonTitle;

- (id)initWithContext:(id)a0 selectAction:(id /* block */)a1;
- (void).cxx_destruct;

@end
