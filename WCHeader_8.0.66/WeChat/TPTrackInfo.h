@class NSString, TPHlsTag, TPDashFormat;

@interface TPTrackInfo : NSObject

@property (nonatomic) unsigned long long trackType;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL isExclusive;
@property (copy, nonatomic) TPHlsTag *hlsTag;
@property (copy, nonatomic) TPDashFormat *dashFormat;

- (id)init;
- (void).cxx_destruct;

@end
