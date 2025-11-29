@class NSString, NSDictionary, NSMutableDictionary, UIView, IESECMarketingCenterPageMeta, NSArray;
@protocol IESECMarketingCenterRitMetaDelegate;

@interface IESECMarketingCenterRitMeta : NSObject <IESECMarketingCenterComponentMetaDelegate>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSMutableDictionary *componentMap;
@property (copy, nonatomic) NSString *rit;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *commonLogParams;
@property (copy, nonatomic) NSDictionary *layoutInfoMap;
@property (weak, nonatomic) UIView *rootContainer;
@property (weak, nonatomic) id<IESECMarketingCenterRitMetaDelegate> delegate;
@property (weak, nonatomic) IESECMarketingCenterPageMeta *pageParent;
@property (copy, nonatomic) NSString *defaultComponent;
@property (copy, nonatomic) NSArray *rootList;
@property (readonly, copy, nonatomic) NSDictionary *modifyData;
@property (readonly, nonatomic) BOOL enableNewVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)openRootComponents;
- (void)openComponentWithName:(id)a0;
- (void)updateWithData:(id)a0 completion:(id /* block */)a1;
- (void)updateWithData:(id)a0 component:(id)a1 completion:(id /* block */)a2;
- (id)initWithRit:(id)a0 delegate:(id)a1;
- (id)getComponentMetaWithKey:(id)a0 createIfNeeded:(BOOL)a1;
- (void)closeComponentWithName:(id)a0;
- (void)closeAll;
- (void).cxx_destruct;
- (void)removeAll;

@end
