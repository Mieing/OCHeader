@class BDPNovelContentData, NSString, TTEpubLayoutManager;
@protocol BDPNovelLayoutDelegate;

@interface BDPNovelTTTextHandler : NSObject <TTEpubResourceDelegate, TTEpubLayoutDelegate>

@property (retain, nonatomic) TTEpubLayoutManager *ttLayoutMangager;
@property (retain, nonatomic) BDPNovelContentData *contentData;
@property (weak, nonatomic) id<BDPNovelLayoutDelegate> callbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)OnLineLayoutedOnPage:(id)a0 pageId:(unsigned long long)a1 LineId:(unsigned long long)a2 IsLastLine:(BOOL)a3 AvaliableHeight:(double)a4;
- (BOOL)OnPageLayouted:(id)a0 IsLast:(BOOL)a1;
- (id)fetchResourceData:(id)a0 parent_path:(id)a1 resourceType:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })fetchImgSize:(id)a0 parent_path:(id)a1;
- (id)fetchResourceInfo:(id)a0;
- (id)fetchInlineAdTag:(id)a0 Attributes:(id)a1 ParaID:(int)a2 PageID:(int)a3;
- (void)notifyEpubParagraphElement:(id)a0 IsLast:(BOOL)a1;
- (id)fetchLinkInfo:(id)a0;
- (id)fetchFootnoteInfo:(id)a0 raw_content:(id)a1;
- (id)fetchFont:(id)a0;
- (void)parseAndLayoutWithContentData:(id)a0 componentModel:(id)a1 callbackDelagate:(id)a2;
- (id)config:(id)a0 contentMeta:(id)a1;
- (void)OnLayoutFinished;
- (void).cxx_destruct;
- (void)cancel;

@end
