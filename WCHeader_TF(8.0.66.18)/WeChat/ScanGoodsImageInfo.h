@class NSData, NSString, UIImage, CameraScanGoodsJSAPIInfo, GoodsObject, CameraScanGoodsAdInfo, CameraScanGoodsSearchInfo, CLLocation, NSMutableArray;

@interface ScanGoodsImageInfo : NSObject

@property (nonatomic) long long imageSource;
@property (nonatomic) long long businessType;
@property (nonatomic) long long businessSubType;
@property (nonatomic) long long onlyAcceptResultAction;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned int frameID;
@property (nonatomic) BOOL isAiCrop;
@property (nonatomic) BOOL isUseAi;
@property (retain, nonatomic) GoodsObject *cropObj;
@property (nonatomic) unsigned int cameraImgW;
@property (nonatomic) unsigned int cameraImgH;
@property (retain, nonatomic) CameraScanGoodsAdInfo *adInfo;
@property (retain, nonatomic) CameraScanGoodsSearchInfo *searchInfo;
@property (retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSString *reuploadFilePath;
@property (retain, nonatomic) NSMutableArray *imageInfoList;
@property (nonatomic) BOOL forceJump;
@property (retain, nonatomic) GoodsObject *matchObj;
@property (retain, nonatomic) NSString *reqKey;
@property (nonatomic) long long respResultAction;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpKeyword;
@property (nonatomic) BOOL needLocation;
@property (retain, nonatomic) NSData *respBizBuffer;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned int categoryId;
@property (retain, nonatomic) UIImage *albumImage;
@property (nonatomic) unsigned int eventID;

- (unsigned int)getSvrMode;
- (void).cxx_destruct;

@end
