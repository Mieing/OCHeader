@class NSData, NSString;

@interface MAMapCustomStyleOptions : NSObject

@property (retain, nonatomic) NSData *styleResData;
@property (retain, nonatomic) NSData *styleData;
@property (retain, nonatomic) NSString *styleDataOverseaPath;
@property (retain, nonatomic) NSString *styleId;
@property (retain, nonatomic) NSData *styleTextureData;
@property (retain, nonatomic) NSData *styleExtraData;

- (void).cxx_destruct;

@end
