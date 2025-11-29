@class NSString, NSNumber, NSArray;

@interface POIMediaPlayerVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *urlExpire;
@property (copy, nonatomic) NSArray *playURLList;
@property (copy, nonatomic) NSString *posterImage;
@property (copy, nonatomic) NSString *musicURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
