@class NSString;

@interface AWECommentPostIntegerValueModel : NSObject <AWECommentPostValueProtocol>

@property (nonatomic) long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIntegerValue:(long long)a0;

@end
