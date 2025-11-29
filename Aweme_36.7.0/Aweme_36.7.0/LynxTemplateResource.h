@class NSData, LynxTemplateBundle;

@interface LynxTemplateResource : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) LynxTemplateBundle *bundle;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)initWithNSData:(id)a0;

@end
