@class NSString, NSArray;

@interface MMFavTextComponentData : MMComponentData

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *des;
@property (nonatomic) BOOL leftHasImage;
@property (retain, nonatomic) NSArray *chatNames;
@property (retain, nonatomic) NSArray *chatContents;
@property (nonatomic) long long favType;
@property (nonatomic) BOOL isFromExcerpt;

- (void)fixComponentWidthWith:(unsigned long long)a0 hasThumbAtRight:(BOOL)a1;
- (void).cxx_destruct;

@end
