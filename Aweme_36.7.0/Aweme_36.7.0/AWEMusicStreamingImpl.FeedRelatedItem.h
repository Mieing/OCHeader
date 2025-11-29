@class NSString;

@interface AWEMusicStreamingImpl.FeedRelatedItem : NSObject {
    void /* function */ itemId;
    void /* function */ itemType;
}

@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, copy) NSString *itemType;

- (id)initWithItemId:(id)a0 itemType:(id)a1;
- (id)toDic;
- (void).cxx_destruct;
- (id)init;

@end
