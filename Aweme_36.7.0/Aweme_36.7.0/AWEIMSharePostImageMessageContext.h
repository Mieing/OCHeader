@class NSArray, NSDictionary, UIImage, NSString;

@interface AWEIMSharePostImageMessageContext : AWEIMShareMessageContextBaseModel <AWEIMSharePostImageMessageContextProtocol>

@property (copy, nonatomic) NSArray *shareList;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL createGroup;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *postScriptText;
@property (nonatomic) BOOL shouldSendNoti;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
