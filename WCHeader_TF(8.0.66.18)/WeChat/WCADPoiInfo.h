@class NSString;

@interface WCADPoiInfo : NSObject

@property (nonatomic) int POIType;
@property (retain, nonatomic) NSString *POIId;
@property (retain, nonatomic) NSString *POIName;
@property (retain, nonatomic) NSString *POILink;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValidForShow;
- (void).cxx_destruct;

@end
