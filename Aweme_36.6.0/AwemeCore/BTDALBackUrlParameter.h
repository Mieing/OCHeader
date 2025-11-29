@class BTDALModel, BTDALBackUrl, BTDALCustomLabel, BTDALEvent;

@interface BTDALBackUrlParameter : NSObject <NSCoding>

@property (retain, nonatomic) BTDALEvent *event;
@property (retain, nonatomic) BTDALModel *model;
@property (retain, nonatomic) BTDALBackUrl *backUrlModel;
@property (retain, nonatomic) BTDALCustomLabel *customLabel;
@property (nonatomic) double openTime;
@property (nonatomic) double timeStampId;
@property (nonatomic) BOOL disableTrack;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
