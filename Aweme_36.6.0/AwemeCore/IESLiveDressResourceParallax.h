@class NSString;

@interface IESLiveDressResourceParallax : NSObject <IESLiveDressResourceProtocol>

@property (copy, nonatomic) NSString *resourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isResourceComplete;
- (void).cxx_destruct;

@end
