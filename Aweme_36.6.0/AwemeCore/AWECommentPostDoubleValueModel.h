@class NSString;

@interface AWECommentPostDoubleValueModel : NSObject <AWECommentPostValueProtocol>

@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDoubleValue:(double)a0;

@end
