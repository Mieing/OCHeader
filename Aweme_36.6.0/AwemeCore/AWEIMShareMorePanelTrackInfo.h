@class NSString;

@interface AWEIMShareMorePanelTrackInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *buttonKey;
@property (retain, nonatomic) NSString *buttonDisplayName;
@property (nonatomic) long long itemIndex;
@property (retain, nonatomic) NSString *buttonPosition;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
