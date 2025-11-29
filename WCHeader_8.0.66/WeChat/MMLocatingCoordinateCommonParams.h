@class QIndoorInfo;

@interface MMLocatingCoordinateCommonParams : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long languageScene;
@property (nonatomic) long long type;
@property (retain, nonatomic) QIndoorInfo *indoorInfo;
@property (nonatomic) id requestObj;

- (id)init;
- (void).cxx_destruct;

@end
