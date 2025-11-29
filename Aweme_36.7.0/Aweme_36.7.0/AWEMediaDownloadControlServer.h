@class NSString, NSMutableDictionary, AWEAwemeModel, AWEAwemeACLItem;

@interface AWEMediaDownloadControlServer : HTSService <AWEShareMessage, AWEMediaDownloadControlServer>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableDictionary *downloadStructDict;
@property (nonatomic) unsigned long long currentPanel;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeACLItem *downloadStruct;

- (void)didConfigureShareView:(id)a0 withContext:(id)a1;
- (void)p_checkDiff;
- (id)p_downloadStructWithPanelType:(unsigned long long)a0;
- (id)p_keyWithPanelType:(unsigned long long)a0;
- (id)p_trackKeyWithPanelType:(unsigned long long)a0;
- (void)startContextWithPanelType:(unsigned long long)a0 aweme:(id)a1 enterFrom:(id)a2;
- (void)endContext;
- (void).cxx_destruct;

@end
