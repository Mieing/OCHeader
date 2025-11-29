@class NSData, NSString, NSDate;

@interface BU_AFCachedImage : NSObject

@property (retain, nonatomic) NSData *image;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long totalBytes;
@property (retain, nonatomic) NSDate *lastAccessDate;
@property (nonatomic) unsigned long long currentMemoryUsage;

- (id)initWithImage:(id)a0 identifier:(id)a1;
- (id)accessImage;
- (void).cxx_destruct;
- (id)description;

@end
