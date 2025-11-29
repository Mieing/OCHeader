@class NSString;

@interface KvReportItem26636 : KvReportBaseItem

@property (nonatomic) unsigned int mode_21;
@property (nonatomic) unsigned int ret_22;
@property (nonatomic) unsigned int imageSize_23;
@property (nonatomic) unsigned int predictSize_24;
@property (nonatomic) unsigned int availableMem_25;
@property (nonatomic) unsigned int contentWidth_26;
@property (nonatomic) unsigned int contentHeight_27;
@property (copy, nonatomic) NSString *scaleFactor_28;
@property (nonatomic) unsigned int isCompress_29;
@property (nonatomic) unsigned int costTime_30;
@property (nonatomic) unsigned int delayTime_31;
@property (nonatomic) unsigned int imageWidth_32;
@property (nonatomic) unsigned int imageHeight_33;
@property (copy, nonatomic) NSString *pageUrl_34;
@property (nonatomic) unsigned int realImageMem_35;
@property (nonatomic) unsigned int predictImageMem_36;
@property (copy, nonatomic) NSString *errMsg_37;
@property (nonatomic) unsigned int eventType_38;
@property (copy, nonatomic) NSString *sessionId_39;
@property (nonatomic) unsigned int cropByLimitHeight_40;
@property (nonatomic) unsigned int originContentWidth_41;
@property (nonatomic) unsigned int originContentHeight_42;
@property (nonatomic) unsigned int hasEditCrop_43;
@property (nonatomic) unsigned int isDregradePrinterMode_44;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void).cxx_destruct;

@end
