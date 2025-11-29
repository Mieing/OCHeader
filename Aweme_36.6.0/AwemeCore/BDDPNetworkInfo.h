@class NSString, NSNumber;

@interface BDDPNetworkInfo : NSObject

@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *time;
@property (retain, nonatomic) NSNumber *isBackground;

- (id)initWithSize:(long long)a0 tag:(id)a1 source:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;

@end
