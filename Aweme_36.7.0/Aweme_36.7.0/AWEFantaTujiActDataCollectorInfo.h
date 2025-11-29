@class NSString, AWEAwemeModel;

@interface AWEFantaTujiActDataCollectorInfo : NSObject <FantaDataCollectorInfo>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long tujiActionMask;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
