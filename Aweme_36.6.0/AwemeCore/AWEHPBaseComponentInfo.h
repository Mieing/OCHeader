@class NSString;

@interface AWEHPBaseComponentInfo : NSObject <NSCopying>

@property (nonatomic) double showTimestamp;
@property (nonatomic) double CAMediaShowTimeStamp;
@property (nonatomic) double hideTimestamp;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) BOOL hasEnterConsum;
@property (nonatomic) BOOL isShowing;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
