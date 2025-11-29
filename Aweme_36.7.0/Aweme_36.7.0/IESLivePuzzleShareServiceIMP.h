@class NSString;

@interface IESLivePuzzleShareServiceIMP : NSObject <PuzzleShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providePuzzleShareService:(id)a0;

- (void)shareForHybridWithURL:(id)a0 title:(id)a1 content:(id)a2 imageURL:(id)a3 context:(id)a4 dismissBlock:(id /* block */)a5;

@end
