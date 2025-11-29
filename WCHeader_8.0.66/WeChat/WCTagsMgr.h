@class NSString, NSMutableDictionary;

@interface WCTagsMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *tagsMap;
@property (retain, nonatomic) NSMutableDictionary *customUrlTagsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)registerTagItems:(id)a0;
- (id)tagItemByType:(long long)a0;
- (long long)typeForCustomUrl:(id)a0;
- (long long)registerCustomUrlTagItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 configAction:(id /* block */)a2;
- (void).cxx_destruct;

@end
