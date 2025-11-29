@class NSString;

@interface SearchResult : NSObject

@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned char weight;

- (id)initWithKeyword:(id)a0 weight:(unsigned char)a1;
- (void).cxx_destruct;

@end
