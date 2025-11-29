@class NSDictionary, NSMutableDictionary;
@protocol GXTrackProtocal, GXDataProtocal, GXEventProtocal;

@interface GXTemplateData : NSObject

@property (weak, nonatomic) id<GXDataProtocal> dataListener;
@property (weak, nonatomic) id<GXEventProtocal> eventListener;
@property (weak, nonatomic) id<GXTrackProtocal> trackListener;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSMutableDictionary *resultData;

- (void).cxx_destruct;
- (BOOL)isAvailable;
- (void)dealloc;

@end
