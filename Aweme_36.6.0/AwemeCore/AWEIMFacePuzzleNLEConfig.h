@class NSString, NSArray, UIImage, NSDictionary;

@interface AWEIMFacePuzzleNLEConfig : NSObject

@property (copy, nonatomic) NSString *effectID;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *imagePathArray;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL useEffectCache;
@property (copy, nonatomic) NSString *cachedEffectFilePath;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
