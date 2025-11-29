@class NSNumber, NSString;

@interface AWECommentPostNumberValueModel : NSObject <AWECommentPostValueProtocol>

@property (retain, nonatomic) NSNumber *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNumberValue:(id)a0;

@end
