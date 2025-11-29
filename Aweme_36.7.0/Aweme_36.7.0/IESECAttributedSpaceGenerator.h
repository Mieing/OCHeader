@class NSString;

@interface IESECAttributedSpaceGenerator : NSObject <IESECAttributedGeneratorProtocol>

@property (nonatomic) double spaceWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateAttributedString;
- (id)generateAsyncAttributedContent;
- (id)initWithWidth:(double)a0;

@end
