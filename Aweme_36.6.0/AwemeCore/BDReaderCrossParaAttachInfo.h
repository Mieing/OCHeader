@class BDReaderPlaceholderAttachment;

@interface BDReaderCrossParaAttachInfo : NSObject

@property (retain, nonatomic) BDReaderPlaceholderAttachment *attachment;
@property (nonatomic) long long paraIndex;
@property (nonatomic) long long position;

+ (id)createQuoteAttachment:(id)a0 index:(long long)a1 position:(long long)a2;

- (void).cxx_destruct;

@end
