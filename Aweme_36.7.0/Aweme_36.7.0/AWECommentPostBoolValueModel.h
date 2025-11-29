@class NSString;

@interface AWECommentPostBoolValueModel : NSObject <AWECommentPostValueProtocol>

@property (nonatomic) BOOL value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBoolValue:(BOOL)a0;

@end
