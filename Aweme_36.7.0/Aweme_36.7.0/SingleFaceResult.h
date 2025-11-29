@class NSMutableArray;

@interface SingleFaceResult : NSObject

@property long long m_width;
@property long long m_height;
@property float bbox_x;
@property float bbox_y;
@property float bbox_width;
@property float bbox_height;
@property float score;
@property (retain) NSMutableArray *points_array;
@property (retain) NSMutableArray *visibility_array;
@property float roll;
@property float pitch;
@property float yaw;
@property float eye_dist;
@property long long ID;
@property long long action;
@property long long tracking_cnt;
@property float occlusion_prob;
@property long long mouth_id;
@property long long mouth_mask_size;
@property (retain) NSMutableArray *mouth_mask;
@property (retain) NSMutableArray *mouth_warp_mat;
@property long long teeth_id;
@property long long teeth_mask_size;
@property (retain) NSMutableArray *teeth_mask;
@property (retain) NSMutableArray *teeth_warp_mat;
@property long long face_id;
@property long long face_mask_size;
@property (retain) NSMutableArray *face_mask;
@property (retain) NSMutableArray *face_warp_mat;
@property long long eye_count;
@property long long eyebrow_count;
@property long long lips_count;
@property long long iris_count;
@property (retain) NSMutableArray *eye_left;
@property (retain) NSMutableArray *eye_right;
@property (retain) NSMutableArray *eyebrow_left;
@property (retain) NSMutableArray *eyebrow_right;
@property (retain) NSMutableArray *lips;
@property (retain) NSMutableArray *left_iris;
@property (retain) NSMutableArray *right_iris;

- (void).cxx_destruct;
- (id)init;

@end
