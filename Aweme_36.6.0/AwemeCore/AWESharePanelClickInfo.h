@class NSError, NSString, AWEShareContext;
@protocol AWEShareFunction;

@interface AWESharePanelClickInfo : NSObject <AWESharePanelClickInfoProtocol>

@property (nonatomic) unsigned long long clickType;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) id<AWEShareFunction> function;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isClickToSecondarySharePanel;
- (void).cxx_destruct;

@end
