@class NSString;
@protocol ACCEditCropProtocol, ACCEditTrimProtocol;

@interface ACCTrimCropPiece : NSObject <ACCTrimCropPieceProtocol>

@property (nonatomic) BOOL isReplicaMode;
@property (nonatomic) BOOL copyDone;
@property (copy, nonatomic) id /* block */ imageHandler;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long resourceType;
@property (readonly, nonatomic) id<ACCEditTrimProtocol> trimEditor;
@property (readonly, nonatomic) id<ACCEditCropProtocol> cropEditor;
@property (nonatomic) BOOL isTimeLabelShown;
@property (nonatomic) BOOL isAllowTrim;
@property (nonatomic) BOOL isAllowCrop;
@property (readonly, nonatomic) BOOL isAdjustEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
