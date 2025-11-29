@class NSString;

@interface AWEMusicStreamingImpl.ShareItem : NSObject {
    void /* function */ itemType;
}

@property (nonatomic, copy) NSString *itemType;
@property (nonatomic) long long itemId;

- (id)initWithItemType:(id)a0 itemId:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
