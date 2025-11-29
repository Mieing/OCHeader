@class NSString;
@protocol IESLiveNewDressResourceLoadDelegate;

@interface IESLiveNewDressRedEnvelopeSkinLoadProcessor : NSObject <IESLiveNewDressResourceLoadProcessor>

@property (weak, nonatomic) id<IESLiveNewDressResourceLoadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)dressType;

- (BOOL)loadDressResource:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
