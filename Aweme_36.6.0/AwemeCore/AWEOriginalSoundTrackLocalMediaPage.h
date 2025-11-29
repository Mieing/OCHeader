@class NSString, NSMutableArray;

@interface AWEOriginalSoundTrackLocalMediaPage : NSObject

@property (retain, nonatomic) NSMutableArray *mediaList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *mediaViewModels;

- (id)updateWithPage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
