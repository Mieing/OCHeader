@class NSString;
@protocol IESLiveNewDressResourceLoadDelegate;

@interface IESLiveNewDressProfileSkinLoadProcessor : NSObject <IESLiveNewDressResourceLoadProcessor>

@property (weak, nonatomic) id<IESLiveNewDressResourceLoadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)dressType;

@end
