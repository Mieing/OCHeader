@class NSString;

@interface AWEAnchorDataPOIModelHandler : NSObject <AWEAnchorDataModelHandlerProtocol, AWEAnchorOtherDataForPOIProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)internalAnchorContentDataWithAnchorInfo:(id)a0;
+ (id)p_prefixTagWithAnchorInfo:(id)a0;
+ (id)p_contentTagWithAnchorInfo:(id)a0;
+ (id)p_suffixTagWithAnchorInfo:(id)a0;
+ (id)p_dealWithMinorTags:(id)a0;
+ (id)p_changeTagsToNomalStyle:(id)a0;
+ (id)dataStringForPoiTagWithAnchorInfo:(id)a0;
+ (id)dataStringForDetailValidWithAnchorInfo:(id)a0;


@end
