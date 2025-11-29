@class CMessageWrap, FavoritesItemDataField;

@interface SimpleChatLogInfo : SimpleMsgInfo {
    struct shared_ptr<ChatLogDataItem> { struct ChatLogDataItem *__ptr_; struct __shared_weak_count *__cntrl_; } m_dataItem;
    struct vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<ChatLogDataItem> *, std::allocator<std::shared_ptr<ChatLogDataItem>>> { void *__value_; } __end_cap_; } m_multiDataItem;
}

@property (retain, nonatomic) FavoritesItemDataField *m_dataField;
@property (retain, nonatomic) CMessageWrap *m_dataMsg;

- (void)setDataItem:(void *)a0;
- (void *)dataItem;
- (void)insertMultiDataItem:(void *)a0;
- (void *)multiDataItems;
- (id)p_getInnerDataField:(id)a0 innerIndexArray:(id)a1;
- (unsigned int)getDataPreviewType;
- (BOOL)isAggregationMsg;
- (id)getAppDataPath;
- (id)getTitle;
- (id)getIconName;
- (id)getDataBackgroundColor;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
