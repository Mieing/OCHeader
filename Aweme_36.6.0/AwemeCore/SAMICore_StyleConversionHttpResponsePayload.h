@class NSString, NSMutableArray;

@interface SAMICore_StyleConversionHttpResponsePayload : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSMutableArray *warpingMapIn;
@property (retain, nonatomic) NSMutableArray *warpingMapOut;

- (void)dealloc;

@end
