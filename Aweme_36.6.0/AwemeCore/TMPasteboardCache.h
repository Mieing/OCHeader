@class UIPasteboard;

@interface TMPasteboardCache : NSObject

@property (nonatomic) long long changeCountForWrite;
@property (retain, nonatomic) id lastWriteValue;
@property (retain, nonatomic) UIPasteboard *cachePasteboard;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
