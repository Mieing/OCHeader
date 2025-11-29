@class MAOfflineItem;

@interface MAOfflineItemCommonCity : MAOfflineCity {
    long long _itemStatus;
}

@property (weak, nonatomic) MAOfflineItem *province;

- (void)setItemStatus:(long long)a0;
- (long long)itemStatus;
- (void).cxx_destruct;

@end
