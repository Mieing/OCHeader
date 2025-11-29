@class NSString, NSMutableSet;

@interface SnsUserBehaviourInfo : NSObject <SnsRepotable> {
    struct unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> { struct __hash_table<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>, std::allocator<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>> { float __value_; } __p3_; } __table_; } _pageEnterTimeRecoredMap;
    struct unordered_map<SnsUserBehaviourInfoPageType, unsigned int, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>, std::allocator<std::pair<const SnsUserBehaviourInfoPageType, unsigned int>>> { struct __hash_table<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>, std::allocator<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::hash<SnsUserBehaviourInfoPageType>, std::equal_to<SnsUserBehaviourInfoPageType>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<SnsUserBehaviourInfoPageType, std::__hash_value_type<SnsUserBehaviourInfoPageType, unsigned int>, std::equal_to<SnsUserBehaviourInfoPageType>, std::hash<SnsUserBehaviourInfoPageType>>> { float __value_; } __p3_; } __table_; } _pageStayTimeRecoredMap;
}

@property (retain, nonatomic) NSMutableSet *explodeFeedCountSet;
@property (retain, nonatomic) NSMutableSet *clickFeedSet;
@property (retain, nonatomic) NSMutableSet *galleryBrowseFeedSet;
@property (retain, nonatomic) NSMutableSet *galleryBrowseMediaSet;
@property (retain, nonatomic) NSMutableSet *detailPageBrowsePicSet;
@property (retain, nonatomic) NSMutableSet *togetherBrowseFeedIDSet;
@property (retain, nonatomic) NSString *ownerUsername;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int isFriend;
@property (nonatomic) unsigned int ownerSetting;
@property (nonatomic) unsigned int ownerPrivacySetting;
@property (nonatomic) int sessionid;
@property (nonatomic) unsigned int albumEntrancePicCount;
@property (nonatomic) unsigned int albumExplodeFeedCount;
@property (nonatomic) unsigned int albumClickFeedCount;
@property (nonatomic) unsigned int albumClickFeedList;
@property (nonatomic) unsigned int albumTimelineStayTime;
@property (nonatomic) unsigned int albumTimeDragCount;
@property (nonatomic) unsigned int likeBanner;
@property (nonatomic) unsigned int galleryBrowseFeedCount;
@property (nonatomic) unsigned int galleryBrowsePictureCount;
@property (nonatomic) unsigned int galleryStayTime;
@property (nonatomic) unsigned int feedDetailPageBrowseFeedCount;
@property (nonatomic) unsigned int feedDetailPageBrowsePictureCount;
@property (nonatomic) unsigned int feedDetailPageStayTime;
@property (nonatomic) unsigned int totalStayTime;
@property (retain, nonatomic) NSString *albumClickFeedListStr;
@property (nonatomic) unsigned int albumBannerFlag;
@property (nonatomic) unsigned int signatureFlag;
@property (nonatomic) unsigned int togetherBrowseFeedCount;
@property (nonatomic) unsigned int togetherBrowseTime;
@property (nonatomic) long long togetherEntranceState;
@property (nonatomic) long long browseSceneType;
@property (retain, nonatomic) NSString *albumSessionID;
@property (nonatomic) BOOL starCollectExposeFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)incAlbumExplodeFeed:(id)a0;
- (void)recordClickFeed:(id)a0;
- (void)recordGallery:(id)a0 mediaId:(id)a1;
- (void)recordDetailPageBrowseMedia:(id)a0;
- (void)incDetailPageBrowseFeedCount;
- (void)onSnsUserBehaviourPageAppear:(int)a0;
- (void)onSnsUserBehaviourPageDisappear:(int)a0;
- (void)recordTogetherBrowseFeedIDs:(id)a0;
- (void)addTogetherBrowseTime:(double)a0;
- (unsigned int)safeGetStayTimeOfPage:(int)a0;
- (id)subSession;
- (unsigned int)protocolID;
- (void)doReport;
- (id)logStr;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
